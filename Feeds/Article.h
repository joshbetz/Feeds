//
//  Article.h
//  Project1Solution
//
//  Created by Michael Griepentrog on 2/3/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Article : NSObject {
	NSString *title;
	NSString *url;
	NSDate *date;
}

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSDate *date;

@end
