//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CAGridCellLayer.h"

@class IPKQuantizedTextLayer, NSString;

@interface CAAlbumGroupHeaderCellLayer : CAGridCellLayer
{
    IPKQuantizedTextLayer *_nameLayer;
    NSString *_label;
}

+ (struct CGImage *)imageForRecord:(id)arg1 cellLayer:(id)arg2 view:(id)arg3 selected:(BOOL)arg4 abort:(CDUnknownBlockType)arg5;
+ (BOOL)haveCachedImageForRecord:(id)arg1 cellLayer:(id)arg2 view:(id)arg3 selected:(BOOL)arg4;
@property(nonatomic) IPKQuantizedTextLayer *nameLayer; // @synthesize nameLayer=_nameLayer;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setup;

@end

