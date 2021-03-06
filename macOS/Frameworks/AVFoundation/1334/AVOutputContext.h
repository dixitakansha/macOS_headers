//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding>
{
    AVOutputContextInternal *_outputContext;
}

+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (BOOL)supportsSecureCoding;
+ (id)outputContextForID:(id)arg1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (BOOL)isSystemContextAllowed;
+ (id)auxiliaryOutputContext;
+ (id)sharedAudioPresentationOutputContext;
+ (id)outputContext;
+ (id)allOutputContextImplClasses;
+ (Class)defaultOutputContextImplClass;
+ (void)initialize;
+ (CDUnknownBlockType)commChannelUUIDCommunicationChannelManagerCreator;
+ (CDUnknownBlockType)remoteControlSessionCommunicationChannelManagerCreator;
+ (CDUnknownBlockType)defaultCommunicationChannelManagerCreator;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1 outputDeviceTranslator:(id)arg2 communicationChannelManagerCreator:(CDUnknownBlockType)arg3;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1 volumeController:(struct OpaqueFigVolumeControllerState *)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(CDUnknownBlockType)arg1 outputDeviceTranslator:(id)arg2;
- (void)outputContextImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputContextImpl:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContextImpl:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg1;
- (void)setCommunicationChannelDelegate:(id)arg1;
- (id)communicationChannelDelegate;
- (id)outgoingCommunicationChannel;
- (void)setVolume:(float)arg1;
- (void)outputContextImplDidChangeCanSetVolume:(id)arg1;
- (BOOL)canSetVolume;
- (void)outputContextImplDidChangeVolume:(id)arg1;
- (float)volume;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg1;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)arg1;
- (void)addOutputDevice:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)outputContextImplDidChangeOutputDevices:(id)arg1;
- (id)outputDevices;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg1;
- (void)outputContextImplDidChangeOutputDevice:(id)arg1;
- (void)outputContextImpl:(id)arg1 didInitiateDestinationChange:(id)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2;
- (BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;
- (unsigned long long)outputDeviceFeatures;
- (id)outputDevice;
- (id)associatedAudioDeviceID;
@property(readonly, nonatomic) NSString *deviceName;
- (void)setApplicationProcessID:(int)arg1;
- (int)applicationProcessID;
- (id)outputContextType;
- (id)ID;
- (id)contextID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)impl;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputContextImpl:(id)arg1;
- (id)init;
@property(readonly, nonatomic) struct OpaqueFigRoutingContext *figRoutingContext;

@end

