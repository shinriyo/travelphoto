//
//  TPUserInfo.m
//  travelphoto
//
//  Created by 臣輔 杉田 on 11/17/13.
//  Copyright (c) 2013 shinriyo. All rights reserved.
//

#import "TPUserInfo.h"

@implementation TPUserInfo

+ (TPUserInfo *)sharedInstance {
    static TPUserInfo *sharedInstance;
    static dispatch_once_t pred;
    dispatch_once(&pred, ^{
        sharedInstance = [[TPUserInfo alloc] init];
    });
    
    return sharedInstance;
}

- (NSString *)loadEmail {
    NSString *email = [[LUKeychainAccess standardKeychainAccess] objectForKey:@"email"];
    return email;
}

- (void)saveEmail:(NSString *)email {
    [[LUKeychainAccess standardKeychainAccess] setObject:email forKey:@"email"];
}

- (NSString *)loadPassword {
    NSString *password = [[LUKeychainAccess standardKeychainAccess] objectForKey:@"password"];
    return password;

}

- (void)savePassword:(NSString *)password  {
    [[LUKeychainAccess standardKeychainAccess] setObject:password forKey:@"password"];
}

@end
