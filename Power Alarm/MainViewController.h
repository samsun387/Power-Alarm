//
//  MainViewController.h
//  Power Alarm
//
//  Created by Kevin Yu on 2013-03-21.
//  Copyright (c) 2013 Kevin Yu. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
