//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUImageDataResult-Protocol.h>

@class NSDictionary, NSString, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NUImageDataResult : _NURenderResult <NUImageDataResult>
{
    NSDictionary *_data;
    NUImageGeometry *_geometry;
}

@property(retain) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(copy) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

