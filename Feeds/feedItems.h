//
//  feedItems.h
//  Feeds
//
//  Created by Josh Betz on 2/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSSParser.h"

@interface feedItems : UITableViewController {
    NSString *titleString;
    NSString *detailString;
    NSDictionary *itemDict;
    RSSParser *parser;
}

@property (nonatomic,strong) NSString *titleString;
@property (nonatomic,strong) NSString *detailString;
@property (nonatomic,strong) NSDictionary *itemDict;
@property (nonatomic,strong) RSSParser *parser;

@end
