//
//  ViewController.h
//  paypall
//
//  Created by macserver on 6/21/17.
//  Copyright © 2017 macserver. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"


@interface ViewController : UIViewController <PayPalPaymentDelegate, PayPalFuturePaymentDelegate, PayPalProfileSharingDelegate, UIPopoverControllerDelegate>

@property(nonatomic, strong, readwrite) NSString *environment;
@property(nonatomic, strong, readwrite) NSString *resultText;

@property(nonatomic, strong, readwrite) PayPalConfiguration *payPalConfig;

- (IBAction)implementbutton:(id)sender;


@end

