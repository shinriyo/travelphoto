//
//  TPAppDelegate.h
//  travelphoto
//
//  Created by 臣輔 杉田 on 11/17/13.
//  Copyright (c) 2013 shinriyo. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JASidePanelController;

@interface TPAppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) JASidePanelController *viewController;

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end