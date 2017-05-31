Pod::Spec.new do |s|
s.name             = "TDMachineLibrary"
s.version          = "1.0.1"
s.summary          = "A marquee view used on iOS."
s.description      = <<-DESC
It is a marquee view used on iOS, which implement by Objective-C.
DESC
s.homepage         = "https://github.com/CoderWD/TDMachineLibrary"
# s.screenshots      = ""
s.license          = 'MIT'
s.author           = { "腾达二手机" => "heweidong@outlook.com" }
s.source           = { :git => "https://github.com/CoderWD/TDMachineLibrary.git", :tag => s.version.to_s }
# s.social_media_url = 'https://8win.com/NAME'

s.platform     = :ios, '7.0'
# s.ios.deployment_target = '5.0'
# s.osx.deployment_target = '10.7'
s.requires_arc = true
s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }

s.ios.vendored_frameworks = 'TDMachineLibrary.framework'

# s.ios.exclude_files = 'Classes/osx'
# s.osx.exclude_files = 'Classes/ios'
# s.public_header_files = 'Classes/**/*.h'
s.frameworks = 'Foundation', 'UIKit'

s.dependency 'AFNetworking', '~> 3.1.0'
s.dependency 'SDWebImage', '~> 4.0.0-beta2'
s.dependency 'MJExtension', '~> 3.0.13'
s.dependency 'WDKit'
s.dependency 'MBProgressHUD', '~> 1.0.0'
s.dependency 'ReactiveCocoa', '~> 2.3.1'
s.dependency 'JPush', '~> 3.0.5'

end
