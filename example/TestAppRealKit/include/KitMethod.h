//
//  KitMethod.h
//
//  Created by AppRealKit on 1/6/2015.
//  Copyright (c) 2015-2016 AppRealKit Group. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface KitMethod : NSObject

@property (nonatomic, retain) NSString *AUTHENTICATE_CALLBACK_NAME;
@property (nonatomic, retain) NSString *CREATE_ROOM_CALLBACK_NAME;
@property (nonatomic, retain) NSString *JOIN_ROOM_CALLBACK_NAME;
@property (nonatomic, retain) NSString *LEAVE_ROOM_CALLBACK_NAME;
@property (nonatomic, retain) NSString *GET_ROOM_CALLBACK_NAME;
@property (nonatomic, retain) NSString *GET_LIST_ROOM_CALLBACK_NAME;
@property (nonatomic, retain) NSString *GET_USER_CALLBACK_NAME;
@property (nonatomic, retain) NSString *UPDATE_POINT_CALLBACK_NAME;
@property (nonatomic, retain) NSString *GET_LIST_USER_CALLBACK_NAME;
@property (nonatomic, retain) NSString *GET_LEADER_BOARD_CALLBACK_NAME;
@property (nonatomic, retain) NSString *NOTIFY_IN_ROOM_CALLBACK_NAME;
@property (nonatomic, retain) NSString *NOTIFY_USER_LIST_CALLBACK_NAME;
@property (nonatomic, retain) NSString *NOTIFY_MESSAGE_CALLBACK_NAME;

//Get shared instance singleton
+ (id) sharedInstance;
@end
