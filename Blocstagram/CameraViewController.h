//
//  CameraViewController.h
//  Blocstagram
//
//  Created by Eric Chamberlin on 11/16/15.
//  Copyright © 2015 Eric Chamberlin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end

@interface CameraViewController : UIViewController

@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;

@end