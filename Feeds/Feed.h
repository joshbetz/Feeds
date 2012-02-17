//
//  Feed.h
//  Feeds
//
//  Created by Josh Betz on 2/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Feed : NSObject
{
    NSString *title;
    NSString *url;
}

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *url;

@end
