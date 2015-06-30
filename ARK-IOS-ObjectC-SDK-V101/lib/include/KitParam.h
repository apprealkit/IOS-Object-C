//
//  KitParam.h
//
//  Created by AppRealKit on 1/6/2015.
//  Copyright (c) 2015-2016 AppRealKit Group. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface KitParam : NSObject

@property (nonatomic, retain) NSString *REQUEST_CALLBACK_TYPE_KEY;
@property (nonatomic, retain) NSString *REQUEST_CALLBACK_METHOD_KEY;
@property (nonatomic, retain) NSString *REQUEST_CALLBACK_ID_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_APP_ID_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_APP_SECRET_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_ID_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_USER_ID_KEY;
@property (nonatomic, retain) NSString *REQUEST_CALLBACK_ID_DEFAULT_VALUE;
@property (nonatomic, retain) NSString *REQUEST_DATA_EXTRAS_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_ROOM_ID_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_LIST_ID_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_ORDER_BY_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_IGNORE_ME_KEY;
@property (nonatomic, retain) NSString *RESPONSE_CODE_KEY;
@property (nonatomic, retain) NSString *RESPONSE_MESSAGE_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_STAMINA_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_EXP_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_LEVEL_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_COIN_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_DIAMOND_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_POINT_KEY;
@property (nonatomic, retain) NSString *REQUEST_DATA_CAPACITY_KEY;

//Get shared instance singleton
+ (id) sharedInstance;
@end
