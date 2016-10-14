//
//  VideoPlayerView.m
//  WalkingTours
//
//  Created by Cynthia Sinclair on 10/12/16.
//  Copyright ©2016 Cynthia Sinclair. All rights reserved.
//

#import "VideoPlayerView.h"

@interface VideoPlayerView ()

@property (nonatomic) AVPlayer *player;

@end

@implementation VideoPlayerView

+ (Class)layerClass {
    return [AVPlayerLayer class];
}

- (AVPlayer*)player {
    return [(AVPlayerLayer *)[self layer] player];
}

- (void)setPlayer:(AVPlayer *)player {
    [(AVPlayerLayer *)[self layer] setPlayer:player];
}

@end
