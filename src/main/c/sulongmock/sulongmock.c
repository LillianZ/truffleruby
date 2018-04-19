/*
 * Copyright (c) 2018 Oracle and/or its affiliates. All rights reserved. This
 * code is released under a tri EPL/GPL/LGPL license. You can use it,
 * redistribute it and/or modify it under the terms of the:
 *
 * Eclipse Public License version 1.0
 * GNU General Public License version 2
 * GNU Lesser General Public License version 2.1
 *
 */

// This file is automatically generated by ruby tool/generate-sulongmock.rb

#include <stdio.h>
#include <stdint.h>
#include <sulong/truffle.h>

void rb_tr_mock() {
  fprintf(stderr, "Warning: Mock method called in sulongmock\n");
  abort();
}

void truffle_load_library(const char *string) {
  rb_tr_mock();
}

void *truffle_virtual_malloc(size_t size) {
  rb_tr_mock();
  return 0;
}

void *truffle_managed_malloc(long size) {
  rb_tr_mock();
  return 0;
}

void *truffle_managed_memcpy(void *destination, const void *source, size_t count) {
  rb_tr_mock();
  return 0;
}

void *truffle_handle_for_managed(void *managedObject) {
  rb_tr_mock();
  return 0;
}

void *truffle_release_handle(void *nativeHandle) {
  rb_tr_mock();
  return 0;
}

void *truffle_managed_from_handle(void *nativeHandle) {
  rb_tr_mock();
  return 0;
}

bool truffle_is_handle_to_managed(void *nativeHandle) {
  rb_tr_mock();
  return false;
}

void *truffle_assign_managed(void *dst, void *managed) {
  rb_tr_mock();
  return 0;
}

void *truffle_address_to_function(void *address) {
  rb_tr_mock();
  return 0;
}

void *polyglot_import(const char *name) {
  rb_tr_mock();
  return 0;
}

void polyglot_export(const char *name, void *value) {
  rb_tr_mock();
}

void *polyglot_eval(const char *id, const char *code) {
  rb_tr_mock();
  return 0;
}

void *polyglot_get_arg(int i) {
  rb_tr_mock();
  return 0;
}

bool polyglot_is_value(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_is_null(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_is_number(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_is_boolean(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_is_string(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_fits_in_i8(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_fits_in_i16(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_fits_in_i32(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_fits_in_i64(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_fits_in_float(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_fits_in_double(const void *value) {
  rb_tr_mock();
  return false;
}

int8_t polyglot_as_i8(const void *value) {
  rb_tr_mock();
  return 0;
}

int16_t polyglot_as_i16(const void *value) {
  rb_tr_mock();
  return 0;
}

int32_t polyglot_as_i32(const void *value) {
  rb_tr_mock();
  return 0;
}

int64_t polyglot_as_i64(const void *value) {
  rb_tr_mock();
  return 0;
}

float polyglot_as_float(const void *value) {
  rb_tr_mock();
  return 0.0;
}

double polyglot_as_double(const void *value) {
  rb_tr_mock();
  return 0.0;
}

bool polyglot_as_boolean(const void *value) {
  rb_tr_mock();
  return false;
}

bool polyglot_can_execute(const void *value) {
  rb_tr_mock();
  return false;
}

void *polyglot_invoke(void *object, const char *name, ...) {
  rb_tr_mock();
  return 0;
}

bool polyglot_has_members(const void *value) {
  rb_tr_mock();
  return false;
}

void *polyglot_get_member(const void *object, const char *name) {
  rb_tr_mock();
  return 0;
}

void polyglot_put_member(void *object, const char *name, ...) {
  rb_tr_mock();
}

bool polyglot_has_array_elements(const void *value) {
  rb_tr_mock();
  return false;
}

uint64_t polyglot_get_array_size(const void *array) {
  rb_tr_mock();
  return 0;
}

void *polyglot_get_array_element(const void *array, int idx) {
  rb_tr_mock();
  return 0;
}

void polyglot_set_array_element(void *array, int idx, ...) {
  rb_tr_mock();
}

uint64_t polyglot_get_string_size(const void *value) {
  rb_tr_mock();
  return 0;
}

uint64_t polyglot_as_string(const void *value, char *buffer, uint64_t bufsize, const char *charset) {
  rb_tr_mock();
  return 0;
}

void *polyglot_from_string(const char *string, const char *charset) {
  rb_tr_mock();
  return 0;
}

void *polyglot_from_string_n(const char *string, uint64_t size, const char *charset) {
  rb_tr_mock();
  return 0;
}

void *__polyglot_as_typed(void *ptr, void *typeId) {
  rb_tr_mock();
  return 0;
}

void *__polyglot_as_typed_array(void *ptr, void *typeId) {
  rb_tr_mock();
  return 0;
}

void *__polyglot_from_typed(void *p, void *typeId) {
  rb_tr_mock();
  return 0;
}

void *__polyglot_from_typed_array(void *arr, uint64_t length, void *typeId) {
  rb_tr_mock();
  return 0;
}

