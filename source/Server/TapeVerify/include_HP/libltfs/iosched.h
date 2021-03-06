/*
**  %Z% %I% %W% %G% %U%
**
**  ZZ_Copyright_BEGIN
**
**
**  Licensed Materials - Property of IBM
**
**  IBM Linear Tape File System Single Drive Edition Version 1.3.0.2 for Linux and Mac OS X
**
**  Copyright IBM Corp. 2010, 2013
**
**  This file is part of the IBM Linear Tape File System Single Drive Edition for Linux and Mac OS X
**  (formally known as IBM Linear Tape File System)
**
**  The IBM Linear Tape File System Single Drive Edition for Linux and Mac OS X is free software;
**  you can redistribute it and/or modify it under the terms of the GNU Lesser
**  General Public License as published by the Free Software Foundation,
**  version 2.1 of the License.
**
**  The IBM Linear Tape File System Single Drive Edition for Linux and Mac OS X is distributed in the
**  hope that it will be useful, but WITHOUT ANY WARRANTY; without even the
**  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
**  See the GNU Lesser General Public License for more details.
**
**  You should have received a copy of the GNU Lesser General Public
**  License along with this library; if not, write to the Free Software
**  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
**  or download the license from <http://www.gnu.org/licenses/>.
**
**
**  ZZ_Copyright_END
**
*************************************************************************************
**
** COMPONENT NAME:  IBM Linear Tape File System
**
** FILE NAME:       iosched.h
**
** DESCRIPTION:     Header for the interface with the pluggable I/O schedulers.
**
** AUTHOR:          Lucas C. Villa Real
**                  IBM Almaden Research Center
**                  lucasvr@us.ibm.com
**
*************************************************************************************
*/
#ifndef __iosched_h
#define __iosched_h

#ifdef __cplusplus
extern "C" {
#endif

#include "plugin.h"
#include "iosched_ops.h"

int iosched_init(struct libltfs_plugin *plugin, struct ltfs_volume *vol);
int iosched_destroy(struct ltfs_volume *vol);
int iosched_open(const char *path, bool open_write, struct dentry **dentry,
	struct ltfs_volume *vol);
int iosched_close(struct dentry *d, bool flush, struct ltfs_volume *vol);
bool iosched_initialized(struct ltfs_volume *vol);
ssize_t iosched_read(struct dentry *d, char *buf, size_t size, off_t offset, 
		struct ltfs_volume *vol);
ssize_t iosched_write(struct dentry *d, const char *buf, size_t size, off_t offset, 
	bool isupdatetime, struct ltfs_volume *vol);
int iosched_flush(struct dentry *d, bool closeflag, struct ltfs_volume *vol);
int iosched_truncate(struct dentry *d, off_t length, struct ltfs_volume *vol);
uint64_t iosched_get_filesize(struct dentry *d, struct ltfs_volume *vol);
int iosched_update_data_placement(struct dentry *d, struct ltfs_volume *vol);

#ifdef __cplusplus
}
#endif


#endif /* __iosched_h */
