//
//  Media.h
//  
//
//  Created by Eric Chamberlin on 11/10/15.
//
//

#import <UIKit/UIKit.h>

@class User;

@interface Media : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

 - (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;

@end
