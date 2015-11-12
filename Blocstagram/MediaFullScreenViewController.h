//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Eric Chamberlin on 11/12/15.
//  Copyright © 2015 Eric Chamberlin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end
