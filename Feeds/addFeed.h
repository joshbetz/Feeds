//
//  addFeed.h
//  Feeds
//
//  Created by Josh Betz on 2/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Feed.h"

@interface addFeed : UIViewController
{
    NSMutableArray *feedList;
    NSString *titleString;
    NSString *detailString;
    IBOutlet UITextField *titleField;
    IBOutlet UITextField *detailField;
}

@property (nonatomic,strong) NSMutableArray *feedList;
@property (nonatomic,strong) UITextField *titleField;
@property (nonatomic,strong) UITextField *detailField;

@end
