//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLTexture, OS_dispatch_queue;

@interface EspressoImage2Image : NSObject
{
    void *ctx;
    void *plan;
    struct {
        void *plan;
        int network_index;
    } net;
    struct {
        void *data;
        void *reserved;
        unsigned long long dim[4];
        unsigned long long stride[4];
        unsigned long long width;
        unsigned long long height;
        unsigned long long channels;
        unsigned long long batch_number;
        unsigned long long sequence_length;
        unsigned long long stride_width;
        unsigned long long stride_height;
        unsigned long long stride_channels;
        unsigned long long stride_batch_number;
        unsigned long long stride_sequence_length;
        int storage_type;
    } output_blob;
    id <MTLCommandQueue> queue;
    id <MTLDevice> device;
    NSObject<OS_dispatch_queue> *dispatch_queue;
    BOOL is_temporal_model;
    unsigned long long dim[5];
    int defaultWidth;
    int defaultHeight;
    id <MTLTexture> smallOldResultTexture;
    struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> tweaks;
    struct postprocessing_settings_t current_postprocessing_settings;
    struct shared_ptr<Espresso::generic_load_constant_kernel> noise_load_constant_kernel;
    int _rotation_degrees;
    int _flip_y;
}

+ (int)featureVersion;
+ (id)getStylesKeys;
+ (BOOL)loadStylesConfigAtPath:(id)arg1;
+ (void)setDefaultOption:(id)arg1 toValue:(id)arg2;
@property(nonatomic) int flip_y; // @synthesize flip_y=_flip_y;
@property(nonatomic) int rotation_degrees; // @synthesize rotation_degrees=_rotation_degrees;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)postProcess:(id)arg1 cameraSourceTexture:(id)arg2 inputTexture:(id)arg3 destinationTexture:(id)arg4;
- (void)simpleLinearResize:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(CDStruct_4c83c94d)arg4;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(CDStruct_4c83c94d)arg3;
- (void)tweak:(id)arg1 value:(float)arg2;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2;
- (int)_reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (int)reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (int)reshapeToResolutionPreset:(long long)arg1;
- (int)load:(id)arg1 resolutionPreset:(long long)arg2;
- (int)load:(id)arg1;
- (int)wasReshaped;
- (void)addNoiseLayer;
- (int)height;
- (int)width;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)setupWithQueue:(id)arg1;
- (id)styleName;

@end

