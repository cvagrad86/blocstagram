//
//  DataSource.h
//  
//
//  Created by Eric Chamberlin on 11/10/15.
//
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;


@end
