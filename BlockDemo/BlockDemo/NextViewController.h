//
//  NextViewController.h
//  BlockDemo
//
//  Created by 朱佳男 on 9/23/16.
//  Copyright © 2016 ShangYuKeJi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NextViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *tfTextF;
@property (nonatomic, copy)void (^nextViewControllerBlock)(NSString *tfText);
@end
