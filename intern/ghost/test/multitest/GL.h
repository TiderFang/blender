/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 */

#if defined(WIN32) || defined(__APPLE__)

#  ifdef WIN32
#    include <GL/gl.h>
#    include <windows.h>
#  else  // WIN32
// __APPLE__ is defined
#    include <AGL/gl.h>
#  endif  // WIN32
#else     // defined(WIN32) || defined(__APPLE__)
#  include <GL/gl.h>
#endif  // defined(WIN32) || defined(__APPLE__)
