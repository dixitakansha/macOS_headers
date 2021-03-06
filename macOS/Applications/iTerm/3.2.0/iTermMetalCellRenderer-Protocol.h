//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, iTermCellRenderConfiguration, iTermMetalCellRendererTransientState, iTermMetalFrameData, iTermMetalRendererTransientState;
@protocol MTLCommandBuffer;

@protocol iTermMetalCellRenderer <NSObject>
@property(readonly, nonatomic) BOOL rendererDisabled;
- (iTermMetalRendererTransientState *)createTransientStateForCellConfiguration:(iTermCellRenderConfiguration *)arg1 commandBuffer:(id <MTLCommandBuffer>)arg2;
- (void)drawWithFrameData:(iTermMetalFrameData *)arg1 transientState:(iTermMetalCellRendererTransientState *)arg2;
- (int)createTransientStateStat;

@optional
- (void)writeDebugInfoToFolder:(NSURL *)arg1;
@end

