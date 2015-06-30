//
//  ViewController.h
//  TestAppRealKit
//
//  Created by Pham Thai Hoa on 5/31/15.
//  Copyright (c) 2015 apprealkit.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    IBOutlet UIButton *btAuthenticate;
    IBOutlet UIButton *btCreateRoom;
    IBOutlet UIButton *btGetLogin;
    IBOutlet UIButton *btNotifyUser;
    IBOutlet UIButton *btGetRoom;
    IBOutlet UIButton *btJoinRoom;
    IBOutlet UIButton *btLeaveRoom;
    IBOutlet UIButton *btNotifyRoom;
    IBOutlet UITextField *txtRoom1;
    IBOutlet UITextField *txtRoom2;
    IBOutlet UITextField *txtRoom3;
    IBOutlet UITextField *txtRoom4;
    
    NSString *appID_;
    NSString *appSecret_;
    NSString *hostIP_;
    int iPort_;
    NSString *loginID_;
    NSString *memberID_;
}

@property (retain, nonatomic) IBOutlet UIButton *btAuthenticate;
@property (retain, nonatomic) IBOutlet UIButton *btCreateRoom;
@property (retain, nonatomic) IBOutlet UIButton *btGetLogin;
@property (retain, nonatomic) IBOutlet UIButton *btNotifyUser;
@property (retain, nonatomic) IBOutlet UIButton *btGetRoom;
@property (retain, nonatomic) IBOutlet UIButton *btJoinRoom;
@property (retain, nonatomic) IBOutlet UIButton *btLeaveRoom;
@property (retain, nonatomic) IBOutlet UIButton *btNotifyRoom;
@property (retain, nonatomic) IBOutlet UITextField *txtRoom1;
@property (retain, nonatomic) IBOutlet UITextField *txtRoom2;
@property (retain, nonatomic) IBOutlet UITextField *txtRoom3;
@property (retain, nonatomic) IBOutlet UITextField *txtRoom4;

@end

