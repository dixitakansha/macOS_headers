//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSSceneAgent-Protocol.h>

@class NSString;
@protocol FBSSceneHandle;

@interface FBSBasicSceneAgent : NSObject <FBSSceneAgent, BSDescriptionProviding>
{
    id <FBSSceneHandle> _scene;
}

@property(readonly, nonatomic) __weak id <FBSSceneHandle> scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_configureWithScene:(id)arg1;
- (void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

