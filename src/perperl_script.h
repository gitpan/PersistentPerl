/*
 * Copyright (C) 2002  Sam Horrocks
 * 
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

slotnum_t perperl_script_find();
int  perperl_script_changed();
void perperl_script_close();
int  perperl_script_open();
const struct stat *perperl_script_getstat();
int  perperl_script_open_failure();
void perperl_script_munmap();
PersistentMapInfo *perperl_script_mmap(int max_size);
void perperl_script_missing();
