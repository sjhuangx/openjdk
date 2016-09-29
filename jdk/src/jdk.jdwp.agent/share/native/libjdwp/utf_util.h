/*
 * Copyright (c) 1998, 2014, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

#ifndef _utf_util_h_
#define _utf_util_h_

#include "jni.h"


int JNICALL utf8sToUtf8mLength(jbyte *string, int length);
void JNICALL utf8sToUtf8m(jbyte *string, int length, jbyte *newString, int newLength);
int JNICALL utf8mToUtf8sLength(jbyte *string, int length);
void JNICALL utf8mToUtf8s(jbyte *string, int length, jbyte *newString, int newLength);

int JNICALL utf8ToPlatform(jbyte *utf8, int len, char* output, int outputMaxLen);
int JNICALL utf8FromPlatform(char *str, int len, jbyte *output, int outputMaxLen);

#endif
