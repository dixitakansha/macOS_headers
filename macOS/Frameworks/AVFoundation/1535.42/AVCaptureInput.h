//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject
{
    AVCaptureInputInternal *_inputInternal;
}

- (struct OpaqueCMClock *)inputClock;
- (void)sessionWillUseOutputDecompressionOptions:(id)arg1 forPort:(id)arg2;
- (void)graphWillStopForSession:(id)arg1 error:(id)arg2;
- (void)graphWillStartForSession:(id)arg1;
- (int)clockProviderNodeForInputPort:(id)arg1;
- (unsigned int)unitOutputNumberForInputPort:(id)arg1;
- (int)graphNodeForInputPort:(id)arg1;
- (void)removeInputUnitsForInputPort:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addInputUnitsForInputPort:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
- (id)notReadyError;
- (id)defaultPortForMediaType:(id)arg1;
- (id)portsForMediaType:(id)arg1;
- (void)setSession:(id)arg1;
- (id)session;
@property(readonly, nonatomic) NSArray *ports;
- (void)dealloc;
- (id)initSubclass;

@end

