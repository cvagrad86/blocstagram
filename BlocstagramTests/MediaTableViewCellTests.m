//
//  MediaTableViewCellTests.m
//  Blocstagram
//
//  Created by Eric Chamberlin on 11/17/15.
//  Copyright © 2015 Eric Chamberlin. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "MediaTableViewCell.h"

@interface MediaTableViewCellTests : XCTestCase

@end

@implementation MediaTableViewCellTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

/*
 
 - (CGFloat) tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
 //return 300;
 
 //this math allows the correct resizing of the images.
 
 Media *item = [DataSource sharedInstance].mediaItems[indexPath.row];
 return [MediaTableViewCell heightForMediaItem:item width:CGRectGetWidth(self.view.frame) traitCollection:self.view.traitCollection];
 
 }

 */

- (void) testForAccurateHeights {
    
    
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}



@end
