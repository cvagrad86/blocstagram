//
//  ImagesTableViewController.h
//  
//
//  Created by Eric Chamberlin on 11/10/15.
//
//

#import <UIKit/UIKit.h>

@interface ImagesTableViewController : UITableViewController
@property (nonatomic, strong) NSMutableArray *images;

@property(nonatomic) CGFloat decelerationRate;


@end
