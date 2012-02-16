//
//  RSSParser.h
//  Project1Solution
//
//  Created by Michael Griepentrog on 2/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Article.h"


@interface RSSParser : NSObject <NSXMLParserDelegate> {
	@public
	NSMutableArray *articleList;
	@private
	NSString *rssURL;
	NSMutableString *currentData;
	Article *currentArticle;
	BOOL accumulatingParsedCharacterData;
	BOOL inItemTag;
}

-(RSSParser*) initWithRSSFeed: (NSString *)anRSSFeed;

@property (nonatomic, strong) NSMutableArray *articleList;
@property (nonatomic, strong) NSString *rssURL;
@property (nonatomic, strong) NSMutableString *currentData;
@property (nonatomic, strong) Article *currentArticle;

@end
