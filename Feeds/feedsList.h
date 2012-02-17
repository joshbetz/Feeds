//
//  feedsList.h
//  Feeds
//
//  Created by Josh Betz on 2/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Feed.h"

@interface feedsList : UITableViewController
{
	NSMutableArray *feedList;
}

@property (nonatomic,strong) NSMutableArray *feedList;

@end
