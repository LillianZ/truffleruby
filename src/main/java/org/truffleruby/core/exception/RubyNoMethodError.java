/*
 * Copyright (c) 2015, 2019 Oracle and/or its affiliates. All rights reserved. This
 * code is released under a tri EPL/GPL/LGPL license. You can use it,
 * redistribute it and/or modify it under the terms of the:
 *
 * Eclipse Public License version 2.0, or
 * GNU General Public License version 2, or
 * GNU Lesser General Public License version 2.1.
 */
package org.truffleruby.core.exception;

import org.truffleruby.interop.messages.NoMethodErrorMessages;
import org.truffleruby.language.backtrace.Backtrace;

import com.oracle.truffle.api.library.ExportMessage;
import com.oracle.truffle.api.object.Shape;
import org.truffleruby.language.objects.ObjectGraph;
import org.truffleruby.language.objects.ObjectGraphNode;

import java.util.Set;


public final class RubyNoMethodError extends RubyNameError implements ObjectGraphNode {

    public Object args;

    public RubyNoMethodError(
            Shape shape,
            Object message,
            Backtrace backtrace,
            Object cause,
            Object receiver,
            Object name,
            Object args) {
        super(shape, message, backtrace, cause, receiver, name);
        assert args != null;
        this.args = args;
    }

    @Override
    public void getAdjacentObjects(Set<Object> reachable) {
        super.getAdjacentObjects(reachable);

        if (ObjectGraph.isSymbolOrDynamicObject(args)) {
            reachable.add(args);
        }
    }

    @Override
    @ExportMessage
    public Class<?> dispatch() {
        return NoMethodErrorMessages.class;
    }

}
