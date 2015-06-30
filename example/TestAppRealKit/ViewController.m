//
//  ViewController.m
//  TestAppRealKit
//
//  Created by Pham Thai Hoa on 5/31/15.
//  Copyright (c) 2015 apprealkit.com. All rights reserved.
//

#import "ViewController.h"
#import "Balancer.h"

@interface ViewController ()

@end

@implementation ViewController

@synthesize btAuthenticate;
@synthesize btCreateRoom;
@synthesize btGetLogin;
@synthesize btGetRoom;
@synthesize btJoinRoom;
@synthesize btLeaveRoom;
@synthesize btNotifyRoom;
@synthesize btNotifyUser;
@synthesize txtRoom1;
@synthesize txtRoom2;
@synthesize txtRoom3;
@synthesize txtRoom4;

- (IBAction)btnAuthenticateClicked:(id)sender
{
    if([[Balancer sharedInstance] isConnected] == false) {
        return;
    }
    
    [[Balancer sharedInstance] authenticate:loginID_ callback:^(NSString *buffer, int code) {
        dispatch_async(dispatch_get_main_queue(), ^{
            UIAlertView *oAlertView = [[UIAlertView alloc] initWithTitle:@"RESPONSE DATA"
                                                                 message:buffer
                                                                delegate:self
                                                       cancelButtonTitle:@"No"
                                                       otherButtonTitles:@"Yes", nil];
            
            [oAlertView show];
        });
    }];
}

- (IBAction)btnGetLoginClicked:(id)sender
{
    if([[Balancer sharedInstance] isConnected] == false) {
        return;
    }
    
    [[Balancer sharedInstance] getUser:loginID_ callback:^(NSString *buffer, int code) {
        dispatch_async(dispatch_get_main_queue(), ^{
            UIAlertView *oAlertView = [[UIAlertView alloc] initWithTitle:@"RESPONSE DATA"
                                                                 message:buffer
                                                                delegate:self
                                                       cancelButtonTitle:@"No"
                                                       otherButtonTitles:@"Yes", nil];
            
            [oAlertView show];
        });
    }];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Do any additional setup after loading the view, typically from a nib.
    appID_ = @"080693ab-7123-4aee-b560-9f6a8a332a43";
    appSecret_ = @"VORAI5D6yz";
    hostIP_ = @"192.168.10.102";
    iPort_ = 7777;    loginID_ = @"1234";
    memberID_ = @"5678";
        
    //Set debug mode
    [[Balancer sharedInstance] setVerbose:true];
    
    //Set the product ID and Secret
    [[Balancer sharedInstance] setProductID:appID_ secret:appSecret_];
    
    //Opening callback
    [[Balancer sharedInstance] onKitOpen:^(NSString *buffer, int code) {
        dispatch_async(dispatch_get_main_queue(), ^{
            UIAlertView *oAlertView = [[UIAlertView alloc] initWithTitle:@"onKitOpen"
                                                                 message:buffer
                                                                delegate:self
                                                       cancelButtonTitle:@"No"
                                                       otherButtonTitles:@"Yes", nil];
            
            [oAlertView show];
        });
    }];
    
    //Receiving callback
    [[Balancer sharedInstance] onKitMessage:^(NSString *buffer, int code) {
        dispatch_async(dispatch_get_main_queue(), ^{
            UIAlertView *oAlertView = [[UIAlertView alloc] initWithTitle:@"onKitMessage"
                                                                 message:buffer
                                                                delegate:self
                                                       cancelButtonTitle:@"No"
                                                       otherButtonTitles:@"Yes", nil];
            
            [oAlertView show];
        });
    }];
    
    //Closign callback
    [[Balancer sharedInstance] onKitClose:^(NSString *buffer, int code) {
        dispatch_async(dispatch_get_main_queue(), ^{
            UIAlertView *oAlertView = [[UIAlertView alloc] initWithTitle:@"onKitClose"
                                                                 message:buffer
                                                                delegate:self
                                                       cancelButtonTitle:@"No"
                                                       otherButtonTitles:@"Yes", nil];
            
            [oAlertView show];
        });
    }];
    
    //Connect to HOST
    [[Balancer sharedInstance] connect:hostIP_ port:iPort_];
    
    //Bind the click action for buttons
    [btAuthenticate addTarget:self action:@selector(btnAuthenticateClicked:) forControlEvents:UIControlEventTouchUpInside];
    [btGetLogin addTarget:self action:@selector(btnGetLoginClicked:) forControlEvents:UIControlEventTouchUpInside];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
