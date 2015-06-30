//
//  Balancer.h
//
//  Created by AppRealKit on 1/6/2015.
//  Copyright (c) 2015-2016 AppRealKit Group. All rights reserved.
//
#import <Foundation/Foundation.h>
typedef void (^KitCallbackFunc)(NSString *buffer, int code);

@interface Balancer: NSObject
{
    KitCallbackFunc openedCallback;
    KitCallbackFunc sentCallback;
    KitCallbackFunc receivedCallback;
    KitCallbackFunc closedCallback;
}

@property(copy, nonatomic) KitCallbackFunc openedCallback;
@property(copy, nonatomic) KitCallbackFunc sentCallback;
@property(copy, nonatomic) KitCallbackFunc receivedCallback;
@property(copy, nonatomic) KitCallbackFunc closedCallback;

//Get shared instance singleton
+ (id) sharedInstance;

//Dump all callback function
- (void) dumpAllCallbackFunc;

//Set debug flag
- (void) setVerbose:(BOOL) bDebug_;

//Set APP ID and APP secret
- (void) setProductID:(NSString *)appID_ secret:(NSString *)appSecret_;

//Connection to TCP server
- (void) connect:(NSString *)pullHost_ port:(int)pullPort_;

//Check connection status
- (BOOL) isConnected;

//Close operation
- (void) close;

///Register callback function
- (void) onKitOpen:(KitCallbackFunc)openedBlock;
- (void) onKitSent:(KitCallbackFunc)sentBlock;
- (void) onKitMessage:(KitCallbackFunc)receivedBlock;
- (void) onKitClose:(KitCallbackFunc)closedBlock;

//All business methods
- (BOOL) authenticate:(NSString *)loginID callback:(KitCallbackFunc)block;
- (BOOL) createRoom:(NSString *)creatorUserID properties:(NSDictionary *)dict capacity:(int)iCapacity callback:(KitCallbackFunc)block;
- (BOOL) joinRoom:(NSString *)userID room:(NSString *)roomID callback:(KitCallbackFunc)block;
- (BOOL) leaveRoom:(NSString *)userID room:(NSString *)roomID callback:(KitCallbackFunc)block;
- (BOOL) getRoom:(NSString *)roomID callback:(KitCallbackFunc)block;
- (BOOL) getListRoom:(NSString *)userID callback:(KitCallbackFunc)block;
- (BOOL) getUser:(NSString *)userID callback:(KitCallbackFunc)block;
- (BOOL) updatePoint:(NSString *)userID pointlist:(NSDictionary *)dict callback:(KitCallbackFunc)block;
- (BOOL) getListUser:(NSArray *)arrUserID callback:(KitCallbackFunc)block;
- (BOOL) getLeaderBoard:(NSString *)orderBy callback:(KitCallbackFunc)block;
- (BOOL) notifyInRoom:(NSString *)roomID code:(int)code reason:(NSString *)reason ignoreAlertMeFlg:(BOOL) ignoreAlertMeFlg callback:(KitCallbackFunc)block;
- (bool) notifyListUser:(NSArray *)arrUserID code:(int)code reason:(NSString *)reason ignoreAlertMeFlg:(BOOL) ignoreAlertMeFlg callback:(KitCallbackFunc)block;

@end
