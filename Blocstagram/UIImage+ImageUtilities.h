//
//  UIImage+ImageUtilities.h
//  Blocstagram
//
//  Created by Eric Chamberlin on 11/16/15.
//  Copyright © 2015 Eric Chamberlin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

@end
