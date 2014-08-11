//
//  LightBulbDetailViewController.h
//  Bluetooth
//
//  Created by john on 7/3/14.
//  Copyright (c) 2014 Banana Technology. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Device.h"

@interface LightBulbDetailViewController : UIViewController <CBCentralManagerDelegate,CBPeripheralDelegate>

@property (strong,nonatomic) Device *lightBulb;
@property (strong,nonatomic) NSArray *devices;

@property (nonatomic) UILabel *stateLabel;
-(id) initWithDevices:(NSArray *)devices;

@end
