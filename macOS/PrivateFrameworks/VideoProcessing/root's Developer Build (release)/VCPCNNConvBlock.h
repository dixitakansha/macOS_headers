//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNBlock.h>

@class VCPCNNData;

@interface VCPCNNConvBlock : VCPCNNBlock
{
    int _filterSize;
    int _filterNum;
    VCPCNNData *_filter;
    VCPCNNData *_bias;
    int _chunk;
    BOOL _disableReLU;
    CDUnknownFunctionPointerType CalculateDotProductOfChunk;
}

- (void).cxx_destruct;
- (BOOL)isFilterSizeSupported:(int)arg1;
- (int)straightForwardForChunkFour;
- (int)straightForward;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)forward;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 disableReLU:(BOOL)arg4;

@end

