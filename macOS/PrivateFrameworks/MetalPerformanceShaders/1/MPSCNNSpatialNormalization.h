//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSCNNKernel.h>

@interface MPSCNNSpatialNormalization : MPSCNNKernel
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    float _alpha;
    float _beta;
    float _delta;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) float delta; // @synthesize delta=_delta;
@property(nonatomic) float beta; // @synthesize beta=_beta;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3;

@end

