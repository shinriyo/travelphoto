//
//  TPUserInfo.h
//  travelphoto
//
//  Created by 臣輔 杉田 on 11/17/13.
//  Copyright (c) 2013 shinriyo. All rights reserved.
//

#ifndef travelphoto_TPUserInfo_h
#define travelphoto_TPUserInfo_h
#import <Foundation/Foundation.h>
#import "LUKeychainAccess.h"

@interface TPUserInfo : NSObject

+ (TPUserInfo *)sharedInstance;

- (NSString *)loadEmail;
- (void)saveEmail:(NSString *)email;
- (NSString *)loadPassword;
- (void)savePassword:(NSString *)password;

@end
#endif
