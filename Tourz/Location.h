//
//  Location.h
//  WalkingTours
//
//  Created by Cynthia Sinclair on 10/12/16.
//  Copyright ©2016 Cynthia Sinclair. All rights reserved.
//

#import <Parse/Parse.h>
#import "Tour.h"

@interface Location : PFObject <PFSubclassing>

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *locationAddress;
@property (copy, nonatomic) NSString *locationDescription;
@property (strong, nonatomic) PFFile *photo;
@property (strong, nonatomic) PFFile *video;
@property (strong, nonatomic) NSArray *categories;
@property (strong, nonatomic) PFGeoPoint *location;
@property (nonatomic) int orderNumber;
@property (strong, nonatomic) Tour *tour;


-(id)initWithLocationName:(NSString *)locationName
          locationAddress:(NSString *)locationAddress
   locationDescription:(NSString *)locationDescription
                 photo:(PFFile *)photo
                 video:(PFFile *)video
            categories:(NSArray *)categories
              location:(PFGeoPoint *)location
           orderNumber:(int)orderNumber
                  tour:(Tour *)tour;

@end
