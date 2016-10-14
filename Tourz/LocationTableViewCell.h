//
//  LocationTableViewCell.h
//  WalkingTours
//
//  Created by Cynthia Sinclair on 10/12/16.
//  Copyright ©2016 Cynthia Sinclair. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Location.h"

@interface LocationTableViewCell : UITableViewCell

@property (strong, nonatomic) Location *location;
@property (strong, nonatomic) UIImage *image;
- (void)setLocation:(Location *)location;
- (void)setImage:(UIImage *)image;

@end
