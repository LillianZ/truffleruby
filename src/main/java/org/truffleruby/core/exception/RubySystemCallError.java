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

import org.truffleruby.interop.messages.SystemCallErrorMessages;
import org.truffleruby.language.backtrace.Backtrace;

import com.oracle.truffle.api.library.ExportMessage;
import com.oracle.truffle.api.object.Shape;


public final class RubySystemCallError extends RubyException {

    public Object errno;

    public RubySystemCallError(Shape shape, Object message, Backtrace backtrace, Object cause, Object errno) {
        super(shape, message, backtrace, cause);
        assert errno != null;
        this.errno = errno;
    }

    @Override
    @ExportMessage
    public Class<?> dispatch() {
        return SystemCallErrorMessages.class;
    }

}
