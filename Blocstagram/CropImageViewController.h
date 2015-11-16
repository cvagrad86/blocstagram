//
//  CropImageViewController.h
//  Blocstagram
//
//  Created by Eric Chamberlin on 11/16/15.
//  Copyright © 2015 Eric Chamberlin. All rights reserved.
//

#import "MediaFullScreenViewController.h"


@class CropImageViewController;

@protocol CropImageViewControllerDelegate <NSObject>

- (void) cropControllerFinishedWithImage:(UIImage *)croppedImage;

@end

@interface CropImageViewController : MediaFullScreenViewController

- (instancetype) initWithImage:(UIImage *)sourceImage;

@property (nonatomic, weak) NSObject <CropImageViewControllerDelegate> *delegate;

@end
