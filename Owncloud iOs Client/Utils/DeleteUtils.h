//
//  DeleteUtils.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 09/05/16.
//
//

/*
 Copyright (C) 2016, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>

@interface DeleteUtils : NSObject

// Method to delete all the files that can be deleted by user
+ (void) deleteAllDownloadedFilesByUser:(UserDto *) user;

@end
