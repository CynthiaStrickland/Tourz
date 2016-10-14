//
//  VideoPlayerView.h
//  WalkingTours
//
//  Created by Cynthia Sinclair on 10/12/16.
//  Copyright ©2016 Cynthia Sinclair. All rights reserved.
//

#import <UIKit/UIKit.h>
@import AVFoundation;

@interface VideoPlayerView : UIView

+ (Class)layerClass;
- (AVPlayer*)player;
- (void)setPlayer:(AVPlayer *)player;

@end
