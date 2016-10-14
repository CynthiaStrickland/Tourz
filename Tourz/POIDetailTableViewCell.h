//
//  POIDetailTableViewCell.h
//  WalkingTours
//
//  Created by Cynthia Sinclair on 10/12/16.
//  Copyright ©2016 Cynthia Sinclair. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Location.h"

@protocol POIDetailTableViewCellDelegate <NSObject>
-(void)favoriteButtonPressedForTourID:(NSString *)tourId;

@end


@interface POIDetailTableViewCell : UITableViewCell

//create a property to hold a POI
@property (strong, nonatomic) PFObject *object;
@property (strong, nonatomic) Tour *tour;
@property (weak) id <POIDetailTableViewCellDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *favoriteStarButton;






@end
