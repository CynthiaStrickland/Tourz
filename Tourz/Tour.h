//
//  Tour.h
//  WalkingTours
//
//  Created by Cynthia Sinclair on 10/12/16.
//  Copyright ©2016 Cynthia Sinclair. All rights reserved.
//

#import <Parse/Parse.h>

@interface Tour : PFObject <PFSubclassing>

@property(copy, nonatomic) NSString *nameOfTour;
@property(copy, nonatomic) NSString *descriptionText;
@property(strong, nonatomic)PFGeoPoint *startLocation;
@property(strong, nonatomic)PFUser *user;


-(id)initWithNameOfTour:(NSString *)nameOfTour
       descriptionText:(NSString *)descriptionText
         startLocation:(PFGeoPoint *)startLocation
                  user:(PFUser *)user;


@end
