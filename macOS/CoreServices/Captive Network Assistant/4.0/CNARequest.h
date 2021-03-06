//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest;
@protocol CNARequestProbeResult;

@interface CNARequest : NSObject
{
    NSString *_interface;
    id _delegate;
    NSURLRequest *_request;
    struct __CNProber *_proberRef;
    struct __CFRunLoopSource *_sourceRef;
}

+ (void)notifyCompleteWithResult:(unsigned int)arg1 andCookie:(unsigned int)arg2;
@property(copy) NSURLRequest *request; // @synthesize request=_request;
@property(copy) NSString *interface; // @synthesize interface=_interface;
@property id <CNARequestProbeResult> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)stopProbe;
- (void)startProbe;
- (void)notifyCompleteWithResult:(unsigned int)arg1 andCookie:(unsigned int)arg2;
- (BOOL)probeStarted;
- (void)processCredentials;
- (BOOL)hasPostData;

@end

