//
//  SearchService.h
//  WalkingTours
//
//  Created by Cynthia Sinclair on 10/12/16.
//  Copyright ©2016 Cynthia Sinclair. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SearchService : NSObject

+ (NSMutableArray*)findMatchesWithTerm:(NSString*)term arrayToSearch:(NSMutableArray*)arrayToSearch;

@end
