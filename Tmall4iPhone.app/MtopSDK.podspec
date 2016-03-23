Pod::Spec.new do |s|
  s.platform = :ios
  s.ios.deployment_target = '5.0'
  s.name = 'MtopSDK'
  s.version = '1.0.0'
  s.summary = '淘宝MTOPSDK'
  s.description = 'MTOP SDK for IOS'
  s.homepage = 'http://gitlab.alibaba-inc.com/wireless/mtopsdk'
  s.license = {
    :type => 'Copyright',
    :text => <<-LICENSE
              Alibaba-Inc copyright
    LICENSE
  }
  s.requires_arc = true
  s.authors = {'苍至'=>'silu.msl@taobao.com'}

  s.frameworks = 'UIKit', 'Foundation'
  s.libraries = 'stdc++', 'z'

  s.dependency  'SecurityGuardSDK'
  s.dependency  'TBSecuritySDK'
  s.dependency  'NetworkSDK'

  #s.source = { :git=>"git@gitlab.alibaba-inc.com:wireless/opensdk.git", :commit=> "d81fd09" }

  #s.exclude_files = exclude_files+networksdk_no_arc_files
  s.source_files = 'MtopSDK/*.{h,m,c,mm}'


  s.xcconfig = {
   'CLANG_CXX_LANGUAGE_STANDARD' => 'compiler-default',
   'CLANG_CXX_LIBRARY' => 'compiler-default'
  }

  # s.preserve_paths = framework_path
  s.prefix_header_contents = '
#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...) {}
#endif
  '

end
