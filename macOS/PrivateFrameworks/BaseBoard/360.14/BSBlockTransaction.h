//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction
{
    NSString *_debugName;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
- (id)_graphNodeDebugName;
- (id)_descriptionProem;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

