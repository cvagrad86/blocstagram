//
//  DataSource.h
//  
//
//  Created by Eric Chamberlin on 11/10/15.
//
//

#import <Foundation/Foundation.h>

@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error);



@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, strong, readonly) NSString *accessToken;
@property (nonatomic) BOOL *dataExists;

-(void) deleteMediaItem:(Media *) item;

- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) downloadImageForMediaItem:(Media *)mediaItem;
- (void) commentOnMediaItem:(Media *)mediaItem withCommentText:(NSString *)commentText;

- (void) toggleLikeOnMediaItem:(Media *)mediaItem withCompletionHandler:(void (^)(void))completionHandler;



+ (NSString *) instagramClientID;



@end
